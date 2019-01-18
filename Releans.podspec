Pod::Spec.new do |s|
  s.name             = "Releans"
  s.version          = "1.0.0"
  s.summary          = <<-SUMMARY
  <p>The Releans SDK enables developers to use Releans Services in their code. You can get started in minutes.</p>

SUMMARY
  s.homepage         = "http://apimatic.io"
  s.license          = 'MIT'
  s.author           = { "APIMATIC" => "support@apimatic.io" }

  s.requires_arc     = true
  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.8'
  s.source           = {:git => ''}

  s.source_files     = 'Releans/**/*.{h,m}'

  s.dependency       'Unirest-APIMATIC'
  s.dependency       'JSONModel'
  s.dependency       'ISO8601DateFormatter', '~> 0.7'
end
