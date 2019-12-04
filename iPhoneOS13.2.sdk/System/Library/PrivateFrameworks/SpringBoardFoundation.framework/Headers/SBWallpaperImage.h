//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage
{
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFlatColor:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithImage:(id)arg1 wallpaperData:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 wallpaperData:(id)arg3;
- (id)initWithWallpaperData:(id)arg1;

@end

