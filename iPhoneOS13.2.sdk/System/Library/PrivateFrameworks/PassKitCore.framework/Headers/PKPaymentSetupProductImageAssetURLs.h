//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSURL;

@interface PKPaymentSetupProductImageAssetURLs : NSObject <NSCopying>
{
    NSURL *_digitalCardImageUrl;
    NSURL *_thumbnailImageUrl;
    NSURL *_logoImageUrl;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
@property(readonly, nonatomic) NSURL *thumbnailImageUrl; // @synthesize thumbnailImageUrl=_thumbnailImageUrl;
@property(readonly, nonatomic) NSURL *digitalCardImageUrl; // @synthesize digitalCardImageUrl=_digitalCardImageUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageAssetsDictionary:(id)arg1;

@end

