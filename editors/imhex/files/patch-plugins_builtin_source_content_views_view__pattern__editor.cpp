--- plugins/builtin/source/content/views/view_pattern_editor.cpp.orig	2022-11-23 07:51:06 UTC
+++ plugins/builtin/source/content/views/view_pattern_editor.cpp
@@ -461,7 +461,7 @@ namespace hex::plugin::builtin {
                     dataProvider->setReadOnly(true);
 
                     auto hexEditor = ui::HexEditor();
-                    hexEditor.setBackgroundHighlightCallback([this, id](u64 address, const u8 *, size_t) -> std::optional<color_t> {
+                    hexEditor.setBackgroundHighlightCallback([this, id = id](u64 address, const u8 *, size_t) -> std::optional<color_t> {
                         if (this->m_runningEvaluators != 0)
                             return std::nullopt;
                         if (!ImHexApi::Provider::isValid())
@@ -483,7 +483,7 @@ namespace hex::plugin::builtin {
 
                     auto patternProvider = ImHexApi::Provider::get();
 
-                    this->m_sectionWindowDrawer[patternProvider] = [id, patternProvider, dataProvider = std::move(dataProvider), hexEditor, patternDrawer = ui::PatternDrawer()] mutable {
+                    this->m_sectionWindowDrawer[patternProvider] = [id=id, patternProvider, dataProvider = std::move(dataProvider), hexEditor, patternDrawer = ui::PatternDrawer()] mutable {
                         hexEditor.setProvider(dataProvider.get());
                         hexEditor.draw(480_scaled);
 
@@ -944,7 +944,7 @@ namespace hex::plugin::builtin {
                         if (type->isTemplateType())
                             continue;
 
-                        createNestedMenu(hex::splitString(typeName, "::"), [&] {
+                        createNestedMenu(hex::splitString(typeName, "::"), [&, typeName=typeName] {
                             std::string variableName;
                             for (char &c : hex::replaceStrings(typeName, "::", "_"))
                                 variableName += static_cast<char>(std::tolower(c));
