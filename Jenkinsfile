node {
        stage 'Checkout'
            checkout scm	

        stage 'Pre-Build'
            sh 'pod install'

        stage 'Build'
            sh 'xcodebuild -workspace "Releans.xcworkspace" -scheme "Releans"  ONLY_ACTIVE_ARCH=NO' 
        }