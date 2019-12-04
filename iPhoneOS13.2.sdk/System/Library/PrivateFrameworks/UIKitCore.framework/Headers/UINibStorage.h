//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSData, NSString, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject
{
    NSString *bundleResourceName;
    NSString *bundleDirectoryName;
    NSBundle *bundle;
    NSString *identifierForStringsFile;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    _Bool instantiatingForSimulator;
    _Bool captureImplicitLoadingContextOnDecode;
}

@property _Bool captureImplicitLoadingContextOnDecode; // @synthesize captureImplicitLoadingContextOnDecode;
@property(nonatomic) _Bool instantiatingForSimulator; // @synthesize instantiatingForSimulator;
@property(retain, nonatomic) UINibDecoder *nibDecoder; // @synthesize nibDecoder;
@property(copy, nonatomic) NSData *archiveData; // @synthesize archiveData;
@property(copy, nonatomic) NSString *identifierForStringsFile; // @synthesize identifierForStringsFile;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle;
@property(copy, nonatomic) NSString *bundleDirectoryName; // @synthesize bundleDirectoryName;
@property(copy, nonatomic) NSString *bundleResourceName; // @synthesize bundleResourceName;

@end

