//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FPItemDecoration : NSObject
{
    NSString *_decorationIdentifier;
    NSString *_labelFormat;
    NSArray *_labelKeys;
    NSString *_type;
    NSString *_imageType;
    NSString *_bundleIdentifier;
    _Bool _dependsOnParent;
    _Bool _dependsOnStyle;
}

+ (id)infoForItem:(id)arg1 parentInfo:(id)arg2;
+ (void)fetchInfoForItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)decorationWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)_fetchFromCacheWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)_loadDecorationsFromPlist:(id)arg1 bundleIdentifier:(id)arg2 bundle:(struct __CFBundle *)arg3;
+ (void)initialize;
+ (void)_loadBuiltinDecorationTypes;
+ (id)_decorationCache;
@property(readonly, copy, nonatomic) NSString *imageType; // @synthesize imageType=_imageType;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *decorationIdentifier; // @synthesize decorationIdentifier=_decorationIdentifier;
- (void)folderStatusForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)labelsWithItem:(id)arg1 error:(id *)arg2;
- (id)labelsWithInfo:(id)arg1 error:(id *)arg2;
- (id)labelWithInfo:(id)arg1 error:(id *)arg2 style:(unsigned long long)arg3;
- (id)labelWithInfo:(id)arg1 error:(id *)arg2;
- (id)labelWithItem:(id)arg1 error:(id *)arg2 style:(unsigned long long)arg3;
- (id)labelWithItem:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool requiresFetchingInfoFirst;
- (id)styleDependingKeys;
- (id)parentDependingKeys;
- (id)description;
- (id)initWithPlistEntry:(id)arg1 bundle:(struct __CFBundle *)arg2 bundleIdentifier:(id)arg3;

@end

