# HTML5 runtime
# 
# Copyright (C) 2015 Zhang Ji Peng
# Contact: onecoolx@gmail.com

{
  'variables': {
    'lib_dir': 'freetype-2.6.1',
    'lib_name': 'freetype2',
  },
  'target_name': '<(lib_name)',
  'type': 'shared_library',
  'dependencies': [
    'png',
    'zlib',
  ],
  'defines': [
    'FT2_BUILD_LIBRARY',
    'FT_CONFIG_OPTION_SYSTEM_ZLIB',
  ],
  'include_dirs': [
    '<(lib_dir)/include',
  ],
  'sources': [
    '<(lib_dir)/src/autofit/afangles.h',
    '<(lib_dir)/src/autofit/afblue.h',
    '<(lib_dir)/src/autofit/afcjk.h',
    '<(lib_dir)/src/autofit/afcover.h',
    '<(lib_dir)/src/autofit/afdummy.h',
    '<(lib_dir)/src/autofit/aferrors.h',
    '<(lib_dir)/src/autofit/afglobal.h',
    '<(lib_dir)/src/autofit/afhints.h',
    '<(lib_dir)/src/autofit/afindic.h',
    '<(lib_dir)/src/autofit/aflatin.h',
    '<(lib_dir)/src/autofit/aflatin2.h',
    '<(lib_dir)/src/autofit/afloader.h',
    '<(lib_dir)/src/autofit/afmodule.h',
    '<(lib_dir)/src/autofit/afpic.h',
    '<(lib_dir)/src/autofit/afranges.h',
    '<(lib_dir)/src/autofit/afscript.h',
    '<(lib_dir)/src/autofit/afstyles.h',
    '<(lib_dir)/src/autofit/aftypes.h',
    '<(lib_dir)/src/autofit/afwarp.h',
    '<(lib_dir)/src/autofit/afwrtsys.h',
    '<(lib_dir)/src/autofit/hbshim.h',
    '<(lib_dir)/src/autofit/autofit.c',
    '<(lib_dir)/src/base/basepic.h',
    '<(lib_dir)/src/base/md5.h',
    '<(lib_dir)/src/base/ftbase.h',
    '<(lib_dir)/src/base/ftbase.c',
    '<(lib_dir)/src/base/ftbitmap.c',
    '<(lib_dir)/src/base/ftglyph.c',
    '<(lib_dir)/src/base/ftinit.c',
    '<(lib_dir)/src/base/ftsystem.c',
    '<(lib_dir)/src/bdf/bdf.h',
    '<(lib_dir)/src/bdf/bdfdrivr.h',
    '<(lib_dir)/src/bdf/bdferror.h',
    '<(lib_dir)/src/bdf/bdf.c',
    '<(lib_dir)/src/bzip2/ftbzip2.c',
    '<(lib_dir)/src/cache/ftccache.h',
    '<(lib_dir)/src/cache/ftccback.h',
    '<(lib_dir)/src/cache/ftcerror.h',
    '<(lib_dir)/src/cache/ftcglyph.h',
    '<(lib_dir)/src/cache/ftcimage.h',
    '<(lib_dir)/src/cache/ftcmanag.h',
    '<(lib_dir)/src/cache/ftcmru.h',
    '<(lib_dir)/src/cache/ftcsbits.h',
    '<(lib_dir)/src/cache/ftcache.c',
    '<(lib_dir)/src/cff/cf2arrst.h',
    '<(lib_dir)/src/cff/cf2blues.h',
    '<(lib_dir)/src/cff/cf2error.h',
    '<(lib_dir)/src/cff/cf2fixed.h',
    '<(lib_dir)/src/cff/cf2font.h',
    '<(lib_dir)/src/cff/cf2ft.h',
    '<(lib_dir)/src/cff/cf2glue.h',
    '<(lib_dir)/src/cff/cf2hints.h',
    '<(lib_dir)/src/cff/cf2intrp.h',
    '<(lib_dir)/src/cff/cf2read.h',
    '<(lib_dir)/src/cff/cf2stack.h',
    '<(lib_dir)/src/cff/cf2types.h',
    '<(lib_dir)/src/cff/cffcmap.h',
    '<(lib_dir)/src/cff/cffdrivr.h',
    '<(lib_dir)/src/cff/cfferrs.h',
    '<(lib_dir)/src/cff/cffgload.h',
    '<(lib_dir)/src/cff/cffload.h',
    '<(lib_dir)/src/cff/cffobjs.h',
    '<(lib_dir)/src/cff/cffparse.h',
    '<(lib_dir)/src/cff/cffpic.h',
    '<(lib_dir)/src/cff/cfftoken.h',
    '<(lib_dir)/src/cff/cfftypes.h',
    '<(lib_dir)/src/cff/cff.c',
    '<(lib_dir)/src/cid/ciderrs.h',
    '<(lib_dir)/src/cid/cidgload.h',
    '<(lib_dir)/src/cid/cidload.h',
    '<(lib_dir)/src/cid/cidobjs.h',
    '<(lib_dir)/src/cid/cidparse.h',
    '<(lib_dir)/src/cid/cidriver.h',
    '<(lib_dir)/src/cid/cidtoken.h',
    '<(lib_dir)/src/cid/type1cid.c',
    '<(lib_dir)/src/gxvalid/gxvalid.h',
    '<(lib_dir)/src/gxvalid/gxvcommn.h',
    '<(lib_dir)/src/gxvalid/gxverror.h',
    '<(lib_dir)/src/gxvalid/gxvfeat.h',
    '<(lib_dir)/src/gxvalid/gxvmod.h',
    '<(lib_dir)/src/gxvalid/gxvmort.h',
    '<(lib_dir)/src/gxvalid/gxvmorx.h',
    '<(lib_dir)/src/gxvalid/gxvalid.c',
    '<(lib_dir)/src/otvalid/otvalid.h',
    '<(lib_dir)/src/otvalid/otvcommn.h',
    '<(lib_dir)/src/otvalid/otverror.h',
    '<(lib_dir)/src/otvalid/otvgpos.h',
    '<(lib_dir)/src/otvalid/otvmod.h',
    '<(lib_dir)/src/otvalid/otvalid.c',
    '<(lib_dir)/src/pcf/pcf.h',
    '<(lib_dir)/src/pcf/pcfdrivr.h',
    '<(lib_dir)/src/pcf/pcferror.h',
    '<(lib_dir)/src/pcf/pcfread.h',
    '<(lib_dir)/src/pcf/pcfutil.h',
    '<(lib_dir)/src/pcf/pcf.c',
    '<(lib_dir)/src/pfr/pfrcmap.h',
    '<(lib_dir)/src/pfr/pfrdrivr.h',
    '<(lib_dir)/src/pfr/pfrerror.h',
    '<(lib_dir)/src/pfr/pfrgload.h',
    '<(lib_dir)/src/pfr/pfrload.h',
    '<(lib_dir)/src/pfr/pfrobjs.h',
    '<(lib_dir)/src/pfr/pfrsbit.h',
    '<(lib_dir)/src/pfr/pfrtypes.h',
    '<(lib_dir)/src/pfr/pfr.c',
    '<(lib_dir)/src/psaux/afmparse.h',
    '<(lib_dir)/src/psaux/psauxerr.h',
    '<(lib_dir)/src/psaux/psauxmod.h',
    '<(lib_dir)/src/psaux/psconv.h',
    '<(lib_dir)/src/psaux/psobjs.h',
    '<(lib_dir)/src/psaux/t1cmap.h',
    '<(lib_dir)/src/psaux/t1decode.h',
    '<(lib_dir)/src/psaux/psaux.c',
    '<(lib_dir)/src/pshinter/pshalgo.h',
    '<(lib_dir)/src/pshinter/pshglob.h',
    '<(lib_dir)/src/pshinter/pshmod.h',
    '<(lib_dir)/src/pshinter/pshnterr.h',
    '<(lib_dir)/src/pshinter/pshpic.h',
    '<(lib_dir)/src/pshinter/pshrec.h',
    '<(lib_dir)/src/pshinter/pshinter.c',
    '<(lib_dir)/src/psnames/psmodule.h',
    '<(lib_dir)/src/psnames/psnamerr.h',
    '<(lib_dir)/src/psnames/pspic.h',
    '<(lib_dir)/src/psnames/pstables.h',
    '<(lib_dir)/src/psnames/psnames.c',
    '<(lib_dir)/src/raster/ftmisc.h',
    '<(lib_dir)/src/raster/ftraster.h',
    '<(lib_dir)/src/raster/ftrend1.h',
    '<(lib_dir)/src/raster/rasterrs.h',
    '<(lib_dir)/src/raster/rastpic.h',
    '<(lib_dir)/src/raster/raster.c',
    '<(lib_dir)/src/gzip/infblock.h',
    '<(lib_dir)/src/gzip/infcodes.h',
    '<(lib_dir)/src/gzip/inffixed.h',
    '<(lib_dir)/src/gzip/inftrees.h',
    '<(lib_dir)/src/gzip/infutil.h',
    '<(lib_dir)/src/gzip/zconf.h',
    '<(lib_dir)/src/gzip/zlib.h',
    '<(lib_dir)/src/gzip/zutil.h',
    '<(lib_dir)/src/gzip/ftgzip.c',
    '<(lib_dir)/src/lzw/ftzopen.h',
    '<(lib_dir)/src/lzw/ftlzw.c',
    '<(lib_dir)/src/sfnt/pngshim.h',
    '<(lib_dir)/src/sfnt/sfdriver.h',
    '<(lib_dir)/src/sfnt/sferrors.h',
    '<(lib_dir)/src/sfnt/sfntpic.h',
    '<(lib_dir)/src/sfnt/sfobjs.h',
    '<(lib_dir)/src/sfnt/ttbdf.h',
    '<(lib_dir)/src/sfnt/ttcmap.h',
    '<(lib_dir)/src/sfnt/ttcmapc.h',
    '<(lib_dir)/src/sfnt/ttkern.h',
    '<(lib_dir)/src/sfnt/ttload.h',
    '<(lib_dir)/src/sfnt/ttmtx.h',
    '<(lib_dir)/src/sfnt/ttpost.h',
    '<(lib_dir)/src/sfnt/ttsbit.h',
    '<(lib_dir)/src/sfnt/sfnt.c',
    '<(lib_dir)/src/smooth/ftgrays.h',
    '<(lib_dir)/src/smooth/ftsmerrs.h',
    '<(lib_dir)/src/smooth/ftsmooth.h',
    '<(lib_dir)/src/smooth/ftspic.h',
    '<(lib_dir)/src/smooth/smooth.c',
    '<(lib_dir)/src/truetype/ttdriver.h',
    '<(lib_dir)/src/truetype/tterrors.h',
    '<(lib_dir)/src/truetype/ttgload.h',
    '<(lib_dir)/src/truetype/ttgxvar.h',
    '<(lib_dir)/src/truetype/ttinterp.h',
    '<(lib_dir)/src/truetype/ttobjs.h',
    '<(lib_dir)/src/truetype/ttpic.h',
    '<(lib_dir)/src/truetype/ttpload.h',
    '<(lib_dir)/src/truetype/ttsubpix.h',
    '<(lib_dir)/src/truetype/truetype.c',
    '<(lib_dir)/src/type1/t1afm.h',
    '<(lib_dir)/src/type1/t1driver.h',
    '<(lib_dir)/src/type1/t1errors.h',
    '<(lib_dir)/src/type1/t1gload.h',
    '<(lib_dir)/src/type1/t1load.h',
    '<(lib_dir)/src/type1/t1objs.h',
    '<(lib_dir)/src/type1/t1parse.h',
    '<(lib_dir)/src/type1/t1tokens.h',
    '<(lib_dir)/src/type1/type1.c',
    '<(lib_dir)/src/type42/t42drivr.h',
    '<(lib_dir)/src/type42/t42error.h',
    '<(lib_dir)/src/type42/t42objs.h',
    '<(lib_dir)/src/type42/t42parse.h',
    '<(lib_dir)/src/type42/t42types.h',
    '<(lib_dir)/src/type42/type42.c',
  ],
  'conditions': [
    ['OS=="win"', {
      'defines': [
        'BUILD_FT2',
      ],
      'sources': [
        '<(lib_dir)/src/winfonts/winfnt.c',
        '<(lib_dir)/src/winfonts/winfnt.h',
        '<(lib_dir)/src/winfonts/fnterrs.h',
      ],
      'include_dirs': [
        '$(OutDir)/include',
      ],
      'actions': [
       {
        'action_name': 'install_header1',
        'inputs': [
          '<(lib_dir)/include/freetype',
         ],
        'outputs': [
          '$(OutDir)/include/freetype',
         ],
        'action': [
          'python',
          'tools/cp.py',
          '<(_inputs)',
          '$(OutDir)/include/freetype',
        ],
        'msvs_cygwin_shell': 0,
       },
       {
        'action_name': 'install_header2',
        'inputs': [
          '<(lib_dir)/include/ft2build.h',
         ],
        'outputs': [
          '$(OutDir)/include/ft2build.h',
         ],
        'action': [
          'python',
          'tools/cp.py',
          '<(_inputs)',
          '$(OutDir)/include/ft2build.h',
        ],
        'msvs_cygwin_shell': 0,
       },
      ],
    }],
    ['OS=="linux"', {
      'include_dirs': [
        '$(builddir)/include',
      ],
      'actions': [
       {
        'action_name': 'install_header1',
        'inputs': [
          '<(lib_dir)/include/freetype',
        ],
        'outputs': [
          '$(builddir)/include/freetype',
        ],
        'action': [
        'python',
        'tools/cp.py',
        '<(_inputs)',
        '$(builddir)/include/freetype',
        ],
       },
       {
        'action_name': 'install_header2',
        'inputs': [
          '<(lib_dir)/include/ft2build.h',
        ],
        'outputs': [
          '$(builddir)/include/ft2build.h',
        ],
        'action': [
        'python',
        'tools/cp.py',
        '<(_inputs)',
        '$(builddir)/include/ft2build.h',
        ],
       },
      ],
    }],
  ],
  'includes': [
    '../build/configs.gypi',
    '../build/defines.gypi',
  ],
}

