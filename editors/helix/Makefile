PORTNAME=	helix
DISTVERSION=	22.12
CATEGORIES=	editors
MASTER_SITES=	https://git.sr.ht/~ecmma/tree-sitter-hare/archive/:treesitterhare \
		https://raw.githubusercontent.com/tree-sitter/tree-sitter-javascript/${TREE_SITTER_JSHIGH_REV}/queries/highlights.scm?file=/:jshigh \
		https://raw.githubusercontent.com/tree-sitter/tree-sitter-typescript/${TREE_SITTER_TSHIGH_REV}/queries/highlights.scm?file=/:tshigh
DISTFILES=	${TREE_SITTER_HARE_REV}.tar.gz:treesitterhare \
		${TREE_SITTER_JSHIGH_REV}-js-highlights.scm:jshigh \
		${TREE_SITTER_TSHIGH_REV}-ts-highlights.scm:tshigh
EXTRACT_ONLY=	${DISTFILES:N*\:*high:C/:[^:]+$//}

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Post-modern modal text editor
WWW=		https://helix-editor.com/

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo

CONFLICTS_INSTALL=	shx

USE_GITHUB=	yes
GH_ACCOUNT=	helix-editor
GH_TUPLE=	\
		virchau13:tree-sitter-astro:5f5c3e73:virchau13_tree_sitter_astro/runtime/grammars/sources/astro \
		Beaglefoot:tree-sitter-awk:a799bc5d:Beaglefoot_tree_sitter_awk/runtime/grammars/sources/awk \
		tree-sitter:tree-sitter-bash:275effdf:tree_sitter_tree_sitter_bash/runtime/grammars/sources/bash \
		vito:tree-sitter-bass:501133e2:vito_tree_sitter_bass/runtime/grammars/sources/bass \
		polarmutex:tree-sitter-beancount:4cbd1f09:polarmutex_tree_sitter_beancount/runtime/grammars/sources/beancount \
		the-mikedavis:tree-sitter-bicep:d8e097fc:the_mikedavis_tree_sitter_bicep/runtime/grammars/sources/bicep \
		tree-sitter:tree-sitter-c:7175a6dd:tree_sitter_tree_sitter_c/runtime/grammars/sources/c \
		archseer:tree-sitter-cairo:b249662a:archseer_tree_sitter_cairo/runtime/grammars/sources/cairo \
		sogaiu:tree-sitter-clojure:e57c569a:sogaiu_tree_sitter_clojure/runtime/grammars/sources/clojure \
		uyha:tree-sitter-cmake:6e51463e:uyha_tree_sitter_cmake/runtime/grammars/sources/cmake \
		stsewd:tree-sitter-comment:5dd3c62f:stsewd_tree_sitter_comment/runtime/grammars/sources/comment \
		fvacek:tree-sitter-cpon:0d01fcda:fvacek_tree_sitter_cpon/runtime/grammars/sources/cpon \
		tree-sitter:tree-sitter-cpp:d5e90fba:tree_sitter_tree_sitter_cpp/runtime/grammars/sources/cpp \
		tree-sitter:tree-sitter-c-sharp:5b60f995:tree_sitter_tree_sitter_c_sharp/runtime/grammars/sources/c-sharp \
		tree-sitter:tree-sitter-css:769203d0:tree_sitter_tree_sitter_css/runtime/grammars/sources/css \
		eonpatapon:tree-sitter-cue:61843e3b:eonpatapon_tree_sitter_cue/runtime/grammars/sources/cue \
		gdamore:tree-sitter-d:601c4a1e:gdamore_tree_sitter_d/runtime/grammars/sources/d \
		UserNobody14:tree-sitter-dart:2d7f6665:UserNobody14_tree_sitter_dart/runtime/grammars/sources/dart \
		joelspadin:tree-sitter-devicetree:877adbfa:joelspadin_tree_sitter_devicetree/runtime/grammars/sources/devicetree \
		the-mikedavis:tree-sitter-diff:fd74c78f:the_mikedavis_tree_sitter_diff/runtime/grammars/sources/diff \
		camdencheek:tree-sitter-dockerfile:7af32bc0:camdencheek_tree_sitter_dockerfile/runtime/grammars/sources/dockerfile \
		rydesun:tree-sitter-dot:91723074:rydesun_tree_sitter_dot/runtime/grammars/sources/dot \
		the-mikedavis:tree-sitter-edoc:74774af7:the_mikedavis_tree_sitter_edoc/runtime/grammars/sources/edoc \
		connorlay:tree-sitter-eex:f742f2fe:connorlay_tree_sitter_eex/runtime/grammars/sources/eex \
		elixir-lang:tree-sitter-elixir:b20eaa75:elixir_lang_tree_sitter_elixir/runtime/grammars/sources/elixir \
		elm-tooling:tree-sitter-elm:df4cb639:elm_tooling_tree_sitter_elm/runtime/grammars/sources/elm \
		ckafi:tree-sitter-elvish:e50787ca:ckafi_tree_sitter_elvish/runtime/grammars/sources/elvish \
		tree-sitter:tree-sitter-embedded-template:d21df11b:tree_sitter_tree_sitter_embedded_template/runtime/grammars/sources/embedded-template \
		seshotake:tree-sitter-env:e6c6bb1e:seshotake_tree_sitter_env/runtime/grammars/sources/env \
		the-mikedavis:tree-sitter-erlang:ce0ed253:the_mikedavis_tree_sitter_erlang/runtime/grammars/sources/erlang \
		greym0uth:tree-sitter-esdl:b840c8a8:greym0uth_tree_sitter_esdl/runtime/grammars/sources/esdl \
		ram02z:tree-sitter-fish:84436cf2:ram02z_tree_sitter_fish/runtime/grammars/sources/fish \
		stadelmanma:tree-sitter-fortran:f0f2f100:stadelmanma_tree_sitter_fortran/runtime/grammars/sources/fortran \
		PrestonKnopp:tree-sitter-gdscript:2a6abdaa:PrestonKnopp_tree_sitter_gdscript/runtime/grammars/sources/gdscript \
		mtoohey31:tree-sitter-gitattributes:3dd50808:mtoohey31_tree_sitter_gitattributes/runtime/grammars/sources/gitattributes \
		the-mikedavis:tree-sitter-git-commit:318dd72a:the_mikedavis_tree_sitter_git_commit/runtime/grammars/sources/git-commit \
		the-mikedavis:tree-sitter-git-config:0e4f0baf:the_mikedavis_tree_sitter_git_config/runtime/grammars/sources/git-config \
		shunsambongi:tree-sitter-gitignore:f4685bf1:shunsambongi_tree_sitter_gitignore/runtime/grammars/sources/gitignore \
		the-mikedavis:tree-sitter-git-rebase:332dc528:the_mikedavis_tree_sitter_git_rebase/runtime/grammars/sources/git-rebase \
		gleam-lang:tree-sitter-gleam:d6cbdf34:gleam_lang_tree_sitter_gleam/runtime/grammars/sources/gleam \
		theHamsta:tree-sitter-glsl:88408ffc:theHamsta_tree_sitter_glsl/runtime/grammars/sources/glsl \
		tree-sitter:tree-sitter-go:05900faa:tree_sitter_tree_sitter_go/runtime/grammars/sources/go \
		PrestonKnopp:tree-sitter-godot-resource:b6ef0768:PrestonKnopp_tree_sitter_godot_resource/runtime/grammars/sources/godot-resource \
		camdencheek:tree-sitter-go-mod:e8f51f8e:camdencheek_tree_sitter_go_mod/runtime/grammars/sources/gomod \
		dannylongeuay:tree-sitter-go-template:395a33e0:dannylongeuay_tree_sitter_go_template/runtime/grammars/sources/gotmpl \
		omertuc:tree-sitter-go-work:6dd9dd79:omertuc_tree_sitter_go_work/runtime/grammars/sources/gowork \
		bkegley:tree-sitter-graphql:5e66e961:bkegley_tree_sitter_graphql/runtime/grammars/sources/graphql \
		tree-sitter:tree-sitter-haskell:b6ec26f1:tree_sitter_tree_sitter_haskell/runtime/grammars/sources/haskell \
		MichaHoffmann:tree-sitter-hcl:3cb7fc28:MichaHoffmann_tree_sitter_hcl/runtime/grammars/sources/hcl \
		phoenixframework:tree-sitter-heex:2e1348c3:phoenixframework_tree_sitter_heex/runtime/grammars/sources/heex \
		tree-sitter:tree-sitter-html:29f53d8f:tree_sitter_tree_sitter_html/runtime/grammars/sources/html \
		elixir-lang:tree-sitter-iex:39f20bb5:elixir_lang_tree_sitter_iex/runtime/grammars/sources/iex \
		justinmk:tree-sitter-ini:4d247fb8:justinmk_tree_sitter_ini/runtime/grammars/sources/ini \
		tree-sitter:tree-sitter-java:09d650de:tree_sitter_tree_sitter_java/runtime/grammars/sources/java \
		tree-sitter:tree-sitter-javascript:4a95461c:tree_sitter_tree_sitter_javascript/runtime/grammars/sources/javascript \
		tree-sitter:tree-sitter-jsdoc:189a6a48:tree_sitter_tree_sitter_jsdoc/runtime/grammars/sources/jsdoc \
		tree-sitter:tree-sitter-json:65bceef6:tree_sitter_tree_sitter_json/runtime/grammars/sources/json \
		sourcegraph:tree-sitter-jsonnet:0475a501:sourcegraph_tree_sitter_jsonnet/runtime/grammars/sources/jsonnet \
		tree-sitter:tree-sitter-julia:8fb38abf:tree_sitter_tree_sitter_julia/runtime/grammars/sources/julia \
		Unoqwy:tree-sitter-kdl:e1cd292c:Unoqwy_tree_sitter_kdl/runtime/grammars/sources/kdl \
		fwcd:tree-sitter-kotlin:a4f71eb9:fwcd_tree_sitter_kotlin/runtime/grammars/sources/kotlin \
		latex-lsp:tree-sitter-latex:8c75e93c:latex_lsp_tree_sitter_latex/runtime/grammars/sources/latex \
		Julian:tree-sitter-lean:d9842610:Julian_tree_sitter_lean/runtime/grammars/sources/lean \
		cbarrete:tree-sitter-ledger:1f864fb2:cbarrete_tree_sitter_ledger/runtime/grammars/sources/ledger \
		benwilliamgraham:tree-sitter-llvm:3b213925:benwilliamgraham_tree_sitter_llvm/runtime/grammars/sources/llvm \
		Flakebi:tree-sitter-llvm-mir:06fabca1:Flakebi_tree_sitter_llvm_mir/runtime/grammars/sources/llvm-mir \
		MunifTanjim:tree-sitter-lua:887dfd4e:MunifTanjim_tree_sitter_lua/runtime/grammars/sources/lua \
		alemuller:tree-sitter-make:a4b91874:alemuller_tree_sitter_make/runtime/grammars/sources/make \
		MDeiml:tree-sitter-markdown:a7de4be2:MDeiml_tree_sitter_markdown/runtime/grammars/sources/markdown \
		staysail:tree-sitter-meson:32a83e8f:staysail_tree_sitter_meson/runtime/grammars/sources/meson \
		nickel-lang:tree-sitter-nickel:9d83db40:nickel_lang_tree_sitter_nickel/runtime/grammars/sources/nickel \
		cstrahan:tree-sitter-nix:6b71a810:cstrahan_tree_sitter_nix/runtime/grammars/sources/nix \
		LhKipp:tree-sitter-nu:eb95bdac:LhKipp_tree_sitter_nu/runtime/grammars/sources/nu \
		tree-sitter:tree-sitter-ocaml:23d419ba:tree_sitter_tree_sitter_ocaml/runtime/grammars/sources/ocaml \
		MineBill:tree-sitter-odin:da885f4a:MineBill_tree_sitter_odin/runtime/grammars/sources/odin \
		bollian:tree-sitter-openscad:5c3ce93d:bollian_tree_sitter_openscad/runtime/grammars/sources/openscad \
		milisims:tree-sitter-org:698bb1a3:milisims_tree_sitter_org/runtime/grammars/sources/org \
		Isopod:tree-sitter-pascal:2fd40f47:Isopod_tree_sitter_pascal/runtime/grammars/sources/pascal \
		ganezdragon:tree-sitter-perl:0ac2c6da:ganezdragon_tree_sitter_perl/runtime/grammars/sources/perl \
		tree-sitter:tree-sitter-php:57f85546:tree_sitter_tree_sitter_php/runtime/grammars/sources/php \
		victorhqc:tree-sitter-prisma:17a59236:victorhqc_tree_sitter_prisma/runtime/grammars/sources/prisma \
		yusdacra:tree-sitter-protobuf:19c211a0:yusdacra_tree_sitter_protobuf/runtime/grammars/sources/protobuf \
		tree-sitter:tree-sitter-python:de221ecc:tree_sitter_tree_sitter_python/runtime/grammars/sources/python \
		yuja:tree-sitter-qmljs:0b2b25bc:yuja_tree_sitter_qmljs/runtime/grammars/sources/qmljs \
		r-lib:tree-sitter-r:cc04302e:r_lib_tree_sitter_r/runtime/grammars/sources/r \
		tree-sitter:tree-sitter-regex:e1cfca3c:tree_sitter_tree_sitter_regex/runtime/grammars/sources/regex \
		jaredramirez:tree-sitter-rescript:65609807:jaredramirez_tree_sitter_rescript/runtime/grammars/sources/rescript \
		tree-sitter:tree-sitter-ruby:4c600a46:tree_sitter_tree_sitter_ruby/runtime/grammars/sources/ruby \
		tree-sitter:tree-sitter-rust:0431a2c6:tree_sitter_tree_sitter_rust/runtime/grammars/sources/rust \
		tree-sitter:tree-sitter-scala:140c96cf:tree_sitter_tree_sitter_scala/runtime/grammars/sources/scala \
		6cdh:tree-sitter-scheme:27fb77db:6cdh_tree_sitter_scheme/runtime/grammars/sources/scheme \
		serenadeai:tree-sitter-scss:c478c686:serenadeai_tree_sitter_scss/runtime/grammars/sources/scss \
		jrmoulton:tree-sitter-slint:0d4dda94:jrmoulton_tree_sitter_slint/runtime/grammars/sources/slint \
		Giorbo:tree-sitter-sml:bd4055d5:Giorbo_tree_sitter_sml/runtime/grammars/sources/sml \
		JoranHonig:tree-sitter-solidity:9004b865:JoranHonig_tree_sitter_solidity/runtime/grammars/sources/solidity \
		DerekStride:tree-sitter-sql:2743c7b5:DerekStride_tree_sitter_sql/runtime/grammars/sources/sql \
		metio:tree-sitter-ssh-client-config:e45c6d5c:metio_tree_sitter_ssh_client_config/runtime/grammars/sources/sshclientconfig \
		Himujjal:tree-sitter-svelte:349a5984:Himujjal_tree_sitter_svelte/runtime/grammars/sources/svelte \
		alex-pinkus:tree-sitter-swift:77c6312c:alex_pinkus_tree_sitter_swift/runtime/grammars/sources/swift \
		Flakebi:tree-sitter-tablegen:568dd8a9:Flakebi_tree_sitter_tablegen/runtime/grammars/sources/tablegen \
		alexanderbrevig:tree-sitter-task:f2cb435c:alexanderbrevig_tree_sitter_task/runtime/grammars/sources/task \
		ikatyang:tree-sitter-toml:7cff70bb:ikatyang_tree_sitter_toml/runtime/grammars/sources/toml \
		the-mikedavis:tree-sitter-tsq:48b5e9f8:the_mikedavis_tree_sitter_tsq/runtime/grammars/sources/tsq \
		gbprod:tree-sitter-twig:807b293f:gbprod_tree_sitter_twig/runtime/grammars/sources/twig \
		tree-sitter:tree-sitter-typescript:6aac031a:tree_sitter_tree_sitter_typescript/runtime/grammars/sources/typescript \
		Philipp-M:tree-sitter-ungrammar:0113de88:Philipp_M_tree_sitter_ungrammar/runtime/grammars/sources/ungrammar \
		vlang:vls:3e8124ea:vlang_vls/runtime/grammars/sources/v \
		vala-lang:tree-sitter-vala:c9eea93b:vala_lang_tree_sitter_vala/runtime/grammars/sources/vala \
		andreytkachenko:tree-sitter-verilog:514d8d70:andreytkachenko_tree_sitter_verilog/runtime/grammars/sources/verilog \
		charmbracelet:tree-sitter-vhs:c6d81f34:charmbracelet_tree_sitter_vhs/runtime/grammars/sources/vhs \
		ikatyang:tree-sitter-vue:91fe2754:ikatyang_tree_sitter_vue/runtime/grammars/sources/vue \
		wasm-lsp:tree-sitter-wasm:2ca28a9f:wasm_lsp_tree_sitter_wasm/runtime/grammars/sources/wast \
		wasm-lsp:tree-sitter-wasm:2ca28a9f:wasm_lsp_tree_sitter_wasm/runtime/grammars/sources/wat \
		szebniok:tree-sitter-wgsl:272e89ef:szebniok_tree_sitter_wgsl/runtime/grammars/sources/wgsl \
		hh9527:tree-sitter-wit:c917790a:hh9527_tree_sitter_wit/runtime/grammars/sources/wit \
		synaptiko:tree-sitter-xit:7d790245:synaptiko_tree_sitter_xit/runtime/grammars/sources/xit \
		RenjiSann:tree-sitter-xml:422528a4:RenjiSann_tree_sitter_xml/runtime/grammars/sources/xml \
		ikatyang:tree-sitter-yaml:0e36bed1:ikatyang_tree_sitter_yaml/runtime/grammars/sources/yaml \
		maxxnino:tree-sitter-zig:8d3224c3:maxxnino_tree_sitter_zig/runtime/grammars/sources/zig

TREE_SITTER_HARE_REV=	bc26a6a949f2e0d98b7bfc437d459b250900a165
TREE_SITTER_JSHIGH_REV=	936d976a782e75395d9b1c8c7c7bf4ba6fe0d86b
TREE_SITTER_TSHIGH_REV=	0ab9d99867435a7667c5548a6617a6bf73dbd830
CARGO_CARGOTOML=	${WRKSRC}/helix-term/Cargo.toml
CARGO_INSTALL_PATH=	./helix-term
CARGO_CRATES=	adler-1.0.2 \
		ahash-0.7.6 \
		ahash-0.8.2 \
		aho-corasick-0.7.20 \
		android_system_properties-0.1.5 \
		anyhow-1.0.66 \
		arc-swap-1.5.1 \
		atoi-1.0.0 \
		autocfg-1.1.0 \
		bitflags-1.3.2 \
		bstr-0.2.17 \
		bstr-1.0.1 \
		btoi-0.4.2 \
		bumpalo-3.11.1 \
		byte-unit-4.0.17 \
		bytecount-0.6.3 \
		bytes-1.3.0 \
		bytesize-1.1.0 \
		cassowary-0.3.0 \
		castaway-0.2.2 \
		cc-1.0.77 \
		cfg-if-1.0.0 \
		chardetng-0.1.17 \
		chrono-0.4.23 \
		clipboard-win-4.4.2 \
		clru-0.5.0 \
		codespan-reporting-0.11.1 \
		compact_str-0.6.1 \
		content_inspector-0.2.4 \
		core-foundation-sys-0.8.3 \
		crc32fast-1.3.2 \
		crossbeam-utils-0.8.14 \
		crossterm-0.25.0 \
		crossterm_winapi-0.9.0 \
		cxx-1.0.82 \
		cxx-build-1.0.82 \
		cxxbridge-flags-1.0.82 \
		cxxbridge-macro-1.0.82 \
		dashmap-5.4.0 \
		dirs-4.0.0 \
		dirs-next-2.0.0 \
		dirs-sys-0.3.7 \
		dirs-sys-next-0.1.2 \
		either-1.8.0 \
		encoding_rs-0.8.31 \
		encoding_rs_io-0.1.7 \
		error-code-2.3.1 \
		etcetera-0.4.0 \
		fastrand-1.8.0 \
		fern-0.6.1 \
		filetime-0.2.18 \
		flate2-1.0.25 \
		fnv-1.0.7 \
		form_urlencoded-1.1.0 \
		futures-core-0.3.25 \
		futures-executor-0.3.25 \
		futures-task-0.3.25 \
		futures-util-0.3.25 \
		fuzzy-matcher-0.3.7 \
		getrandom-0.2.8 \
		git-actor-0.14.1 \
		git-attributes-0.6.0 \
		git-bitmap-0.2.0 \
		git-chunk-0.4.0 \
		git-command-0.2.0 \
		git-config-0.12.0 \
		git-config-value-0.9.0 \
		git-credentials-0.7.0 \
		git-date-0.3.0 \
		git-diff-0.23.0 \
		git-discover-0.9.0 \
		git-features-0.24.1 \
		git-glob-0.5.0 \
		git-hash-0.10.1 \
		git-index-0.9.1 \
		git-lock-3.0.0 \
		git-mailmap-0.6.0 \
		git-object-0.23.0 \
		git-odb-0.37.0 \
		git-pack-0.27.0 \
		git-path-0.6.0 \
		git-prompt-0.2.0 \
		git-quote-0.4.0 \
		git-ref-0.20.0 \
		git-refspec-0.4.0 \
		git-repository-0.29.0 \
		git-revision-0.7.0 \
		git-sec-0.5.0 \
		git-tempfile-3.0.0 \
		git-traverse-0.19.0 \
		git-url-0.11.0 \
		git-validate-0.7.0 \
		git-worktree-0.9.0 \
		globset-0.4.9 \
		grep-matcher-0.1.5 \
		grep-regex-0.1.10 \
		grep-searcher-0.1.10 \
		hash_hasher-2.0.3 \
		hashbrown-0.12.3 \
		hashbrown-0.13.1 \
		hermit-abi-0.1.19 \
		hex-0.4.3 \
		home-0.5.4 \
		human_format-1.0.3 \
		iana-time-zone-0.1.53 \
		iana-time-zone-haiku-0.1.1 \
		idna-0.3.0 \
		ignore-0.4.18 \
		imara-diff-0.1.5 \
		indoc-1.0.7 \
		instant-0.1.12 \
		io-close-0.3.7 \
		itoa-1.0.4 \
		js-sys-0.3.60 \
		lazy_static-1.4.0 \
		libc-0.2.137 \
		libloading-0.7.4 \
		link-cplusplus-1.0.7 \
		lock_api-0.4.9 \
		log-0.4.17 \
		lsp-types-0.93.2 \
		memchr-2.5.0 \
		memmap2-0.5.8 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.6.2 \
		mio-0.8.5 \
		nix-0.25.0 \
		nom-7.1.1 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		num_cpus-1.14.0 \
		num_threads-0.1.6 \
		once_cell-1.16.0 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.4 \
		percent-encoding-2.2.0 \
		pin-project-lite-0.2.9 \
		pin-utils-0.1.0 \
		proc-macro2-1.0.47 \
		prodash-21.1.0 \
		pulldown-cmark-0.9.2 \
		quick-error-2.0.1 \
		quickcheck-1.0.3 \
		quote-1.0.21 \
		rand-0.8.5 \
		rand_core-0.6.4 \
		redox_syscall-0.2.16 \
		redox_users-0.4.3 \
		regex-1.7.0 \
		regex-automata-0.1.10 \
		regex-syntax-0.6.28 \
		remove_dir_all-0.5.3 \
		ropey-1.5.1-alpha \
		rustversion-1.0.9 \
		ryu-1.0.11 \
		same-file-1.0.6 \
		scopeguard-1.1.0 \
		scratch-1.0.2 \
		serde-1.0.149 \
		serde_derive-1.0.149 \
		serde_json-1.0.89 \
		serde_repr-0.1.9 \
		sha1_smol-1.0.0 \
		signal-hook-0.3.14 \
		signal-hook-mio-0.2.3 \
		signal-hook-registry-1.4.0 \
		signal-hook-tokio-0.3.1 \
		slab-0.4.7 \
		slotmap-1.0.6 \
		smallvec-1.10.0 \
		smartstring-1.0.1 \
		smawk-0.3.1 \
		socket2-0.4.7 \
		static_assertions-1.1.0 \
		str-buf-1.0.6 \
		str_indices-0.4.0 \
		syn-1.0.104 \
		tempfile-3.3.0 \
		termcolor-1.1.3 \
		termini-0.1.4 \
		textwrap-0.16.0 \
		thiserror-1.0.37 \
		thiserror-impl-1.0.37 \
		thread_local-1.1.4 \
		threadpool-1.8.1 \
		time-0.3.17 \
		time-core-0.1.0 \
		time-macros-0.2.6 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.0 \
		tokio-1.22.0 \
		tokio-macros-1.8.0 \
		tokio-stream-0.1.11 \
		toml-0.5.9 \
		tree-sitter-0.20.9 \
		unicase-2.6.0 \
		unicode-bidi-0.3.8 \
		unicode-bom-1.1.4 \
		unicode-general-category-0.6.0 \
		unicode-ident-1.0.5 \
		unicode-linebreak-0.1.4 \
		unicode-normalization-0.1.22 \
		unicode-segmentation-1.10.0 \
		unicode-width-0.1.10 \
		url-2.3.1 \
		utf8-width-0.1.6 \
		version_check-0.9.4 \
		walkdir-2.3.2 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.83 \
		wasm-bindgen-backend-0.2.83 \
		wasm-bindgen-macro-0.2.83 \
		wasm-bindgen-macro-support-0.2.83 \
		wasm-bindgen-shared-0.2.83 \
		which-4.3.0 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.40.0 \
		windows-sys-0.42.0 \
		windows_aarch64_gnullvm-0.40.0 \
		windows_aarch64_gnullvm-0.42.0 \
		windows_aarch64_msvc-0.40.0 \
		windows_aarch64_msvc-0.42.0 \
		windows_i686_gnu-0.40.0 \
		windows_i686_gnu-0.42.0 \
		windows_i686_msvc-0.40.0 \
		windows_i686_msvc-0.42.0 \
		windows_x86_64_gnu-0.40.0 \
		windows_x86_64_gnu-0.42.0 \
		windows_x86_64_gnullvm-0.40.0 \
		windows_x86_64_gnullvm-0.42.0 \
		windows_x86_64_msvc-0.40.0 \
		windows_x86_64_msvc-0.42.0

post-extract:
	cd ${WRKSRC}/runtime/grammars/sources && ${CP} -a typescript tsx
	cd ${WRKSRC}/runtime/grammars/sources && ${CP} -a ocaml ocaml-interface
	cd ${WRKSRC}/runtime/grammars/sources && ${CP} -a markdown markdown_inline
	${MV} ${WRKDIR}/tree-sitter-hare-${TREE_SITTER_HARE_REV} ${WRKSRC}/runtime/grammars/sources/hare
	${CP} -R ${DISTDIR}/${TREE_SITTER_TSHIGH_REV}-ts-highlights.scm ${WRKSRC}/runtime/grammars/sources/qmljs/queries/highlights-typescript.scm
	${CP} -R ${DISTDIR}/${TREE_SITTER_JSHIGH_REV}-js-highlights.scm ${WRKSRC}/runtime/grammars/sources/qmljs/queries/highlights-javascript.scm

post-patch:
	${GREP} -F -Rl '%%DATADIR%%' ${WRKSRC}/ | ${XARGS} ${REINPLACE_CMD} -e 's,%%DATADIR%%,${DATADIR},'

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/runtime/grammars
.for DIR in queries themes
	cd ${WRKSRC}/runtime && ${COPYTREE_SHARE} ${DIR} ${STAGEDIR}${DATADIR}/runtime
.endfor
	${INSTALL_DATA} ${WRKSRC}/runtime/tutor ${STAGEDIR}${DATADIR}/runtime/tutor
	${FIND} ${WRKSRC}/runtime/grammars -maxdepth 1 -type f -name '*.so' \
		-exec ${INSTALL_LIB} {} ${STAGEDIR}${DATADIR}/runtime/grammars \;

.include <bsd.port.mk>
