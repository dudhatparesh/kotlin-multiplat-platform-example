
This is the common module of the multiplatform-example.
To assemble jar files( for Android or Any Java client) and frameworks(for iOS) without running the test cases.
please execute the following command in your terminal from the common directory.
`./gradlew assemble`

you can copy generated framework files from the build directory to the ios app with following command.
`rm -rvf ../ios/kotlin-multiplatform-ios/kotlin-multiplatform-ios/kotlin/ios/* `
`cp -R build/bin/ios/ ../ios/kotlin-multiplatform-ios/kotlin-multiplatform-ios/kotlin/ios/`
