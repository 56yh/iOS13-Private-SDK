//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKDiagnostics : NSObject
{
}

+ (void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_allPasses;
+ (id)_secureElementData;
+ (id)generateUbiquityDiagnosticsFile:(_Bool)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(id /* block */)arg2;
+ (void)generateDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(id /* block */)arg2;

@end

