{
  'includes': [ 'common.gyp' ],
  'targets': [

    {
      'target_name': 'osm2pgsql',
      'type': 'executable',
      'sources': [
        'UTF8sanitizer.c',
        'expire-tiles.c',
        'binarysearcharray.c',
        'build_geometry.cpp',
        'input.c',
        'output-pgsql.c',
        'rb.c',
        'middle-pgsql.c',
        'middle-ram.c',
        'node-ram-cache.c',
        'node-persistent-cache.c',
        'osm2pgsql.c',
        'keyvals.c',
        'expire-tiles.c',
        'output-null.c',
        'pgsql.c',
        'reprojection.c',
        'sprompt.c',
        'text-tree.c',
        'parse-xml2.c',
        'parse-primitive.c',
        'parse-pbf.c',
        'parse-o5m.c',
        'osmformat.pb-c.c',
        'fileformat.pb-c.c',
        'wildcmp.c'
      ],
      'defines': [
        '_THREAD_SAFE',
        'VERSION="0.80.0"',
      ],
      'include_dirs': [
         'include',
      ],
      'dependencies': [
      ],
      'conditions': [
        [ 'OS=="mac"', {
          'libraries': [
            '-lgeos',
            '-lpq',
            '-lz',
            '-lbz2',
            '-lproj',
            '-lprotobuf-c',
            '-lxml2',
            '-pthread'
          ],
          'include_dirs': [
             '/usr/local/include/',
             '/usr/include/libxml2/',
             '.',
          ],
          'defines': [
            'BUILD_READER_PBF',
            'PLATFORM="<(OS)"',
            '_LARGEFILE_SOURCE',
            '_FILE_OFFSET_BITS=64',
            'OSM2PGSQL_DATADIR="/usr/local/share/osm2pgsql"',
            'VERSION="0.80.0"'
          ],
        }],
        [ 'OS=="win"', {
          'defines': [
            'PLATFORM="win32"',
          ],
          'libraries': [
            'xml2.lib'
          ],
          'include_dirs': [
          ],
          'defines': [
            'PLATFORM="<(OS)"',
            '_LARGEFILE_SOURCE',
            '_FILE_OFFSET_BITS=64',
            'VERSION="0.80.0"',
            #'WIN32',
            #'_WINDOWS',
            #'_USRDLL',
          ],
          'msvs_settings': {
            'VCLinkerTool': {
              'AdditionalLibraryDirectories': [
              ],
          },
        },
      }],
      ] # conditions
    } # target
  ] # targets
} # gyp