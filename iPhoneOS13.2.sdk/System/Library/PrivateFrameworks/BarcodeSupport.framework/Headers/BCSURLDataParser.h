//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSDataParser-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSURLDataParser : NSObject <BCSDataParser>
{
}

+ (id)_canonicalizeMessageURL:(id)arg1;
+ (long long)_dataTypeForSchemeIfSupportedByDataDetectors:(id)arg1;
+ (id)parseURL:(id)arg1;
+ (id)parseString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

