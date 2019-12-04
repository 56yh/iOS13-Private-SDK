//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKImageKey : NSObject
{
    NSString *_filePath;
    NSString *_cacheKey;
    NSString *_basename;
    NSString *_imageID;
    struct CGSize _size;
}

+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;
+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(retain, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) NSString *filePath;

@end

