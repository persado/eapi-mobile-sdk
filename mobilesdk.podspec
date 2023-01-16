Pod::Spec.new do |spec|
    spec.name                     = 'mobilesdk'
    spec.version                  = '0.2.0'
    spec.homepage                 = 'https://github.com/persado/eapi-mobile-sdk'
    spec.source                   = { :git => "Not Published", :tag => "Cocoapods/#{spec.name}/#{spec.version}" }
    spec.authors                  = 'Maria Makantasi => maria.makantasi@persado.com'
    spec.license                  = ''
    spec.summary                  = 'Mobilesdk is an api client for persadoAPI for serving and tracking'
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"
    spec.subspec 'Debug' do |ss|
        ss.ios.deployment_target = '15.2'
        ss.vendored_frameworks = 'frameworks/debug/mobilesdk.framework'
        ss.dependency 'DebugFramework', '0.3.0'
        ss.configurations = 'Debug'
    end

    spec.subspec 'DebugSimulator' do |ss|
        ss.ios.deployment_target = '15.2'
        ss.source_files = 'frameworks/debug/simulator/mobilesdk.framework'
        ss.dependency 'DebugSimulatorFramework', '0.3.0'
        ss.configurations = 'Debug'
    end

    spec.subspec 'Release' do |ss|
        ss.ios.deployment_target = '15.2'
        ss.source_files = 'frameworks/release/mobilesdk.framework'
        ss.dependency 'ReleaseFramework', '0.3.0'
        ss.configurations = 'Release'
    end

    spec.ios.deployment_target = '15.2'

end
