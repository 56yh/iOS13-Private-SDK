//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface NEFeedNavImageAssetHandle : NSObject
{
    // Error parsing type: , name: filePath
    // Error parsing type: , name: fallbackImage
    // Error parsing type: , name: uniqueKey
    // Error parsing type: , name: feedNavImageSize
    // Error parsing type: , name: tag
    // Error parsing type: , name: feedNavImageStyler
}

- (id)init;
- (void)downloadWithGroup:(id)arg1;
- (id)initWithTag:(id)arg1 feedNavImageSize:(struct CGSize)arg2 feedNavImageStyler:(id)arg3;
- (id)initWithIdentifier:(id)arg1 feedNavImage:(id)arg2 feedNavImageSize:(struct CGSize)arg3 feedNavImageStyler:(id)arg4;
@property(nonatomic, readonly) NSString *uniqueKey;
@property(nonatomic, retain) UIImage *fallbackImage; // @synthesize fallbackImage;
@property(nonatomic, copy) NSString *filePath;

@end

