--- gpu/command_buffer/service/shared_image/gl_texture_image_backing.cc.orig	2022-12-06 08:09:13 UTC
+++ gpu/command_buffer/service/shared_image/gl_texture_image_backing.cc
@@ -345,7 +345,7 @@ void GLTextureImageBacking::InitializeGLTexture(
 }
 
 void GLTextureImageBacking::CreateEGLImage() {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || defined(USE_OZONE)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || defined(USE_OZONE) || BUILDFLAG(IS_BSD)
   SharedContextState* shared_context_state = factory()->GetSharedContextState();
   ui::ScopedMakeCurrent smc(shared_context_state->context(),
                             shared_context_state->surface());
