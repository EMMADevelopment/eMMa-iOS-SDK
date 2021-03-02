// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "EMMA_iOS",
    products: [
        .library(
            name: "EMMA_iOS",
            targets: ["EMMA_iOS"]),
    ],
    dependencies: [
    
    ],
    targets: [
        .binaryTarget(name: "EMMA_iOS", path: "EMMA_iOS.xcframework")
    ]
)
