
This is the ios module of the multiplatform-example.

First you need to assemble  framework files in the common module.
Go to the common directory and follow the steps.

To assemble jar files( for Android or Any Java client) and frameworks(for iOS) without running the test cases.
please execute the following command in your terminal from the common directory.
`./gradlew assemble`

you can copy generated framework files from the build directory to the ios app with following command.
`rm -rvf ../ios/kotlin-multiplatform-ios/kotlin-multiplatform-ios/kotlin/ios/* `
`cp -R build/bin/ios/ ../ios/kotlin-multiplatform-ios/kotlin-multiplatform-ios/kotlin/ios/`


once that is done.
go to ios/kotlin-multiplatform-ios/ directory and double click on
kotlin-multiplatform-ios.xcodeproj file

