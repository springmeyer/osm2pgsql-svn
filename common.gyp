{
  'variables': {
    'conditions': [
      ['OS == "mac"', {
        'target_arch%': 'x64'
      }, {
        'target_arch%': 'ia32'
      }]
    ]
  },
  'target_defaults': {
    'default_configuration': 'Debug',
    'defines': [  ],
    'conditions': [
      ['OS == "mac"', {
        'defines': [ 'DARWIN' ]
      }, {
        'defines': [ 'LINUX' ]
      }],
      ['OS == "mac" and target_arch == "x64"', {
        'xcode_settings': {
          'ARCHS': [ 'x86_64' ]
        },
      }]
    ],
    'configurations': {
      'Debug': {
        'cflags': [ '-g', '-O0','-Wdeclaration-after-statement','-ansi', '-Wall' ],
        'xcode_settings': {
          'OTHER_CFLAGS': [ '-g', '-O0' ]
        }
      },
      'Release': {
        'cflags': [ '-O3' ],
        'defines': [ 'NDEBUG' ],
        'xcode_settings': {
          'OTHER_CFLAGS': [ '-O3','-Wdeclaration-after-statement','-ansi', '-Wall' ]
        }
      }
    }
  }
}