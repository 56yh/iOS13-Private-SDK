//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface TXROptions : NSObject <NSCopying>
{
    _Bool _cubemapFromVerticallyStackedImage;
    unsigned long long _originOperation;
    unsigned long long _colorSpaceHandling;
    _Bool _multiplyAlpha;
}

@property(nonatomic) _Bool multiplyAlpha; // @synthesize multiplyAlpha=_multiplyAlpha;
@property(nonatomic) unsigned long long colorSpaceHandling; // @synthesize colorSpaceHandling=_colorSpaceHandling;
@property(nonatomic) unsigned long long originOperation; // @synthesize originOperation=_originOperation;
@property(nonatomic) _Bool cubemapFromVerticallyStackedImage; // @synthesize cubemapFromVerticallyStackedImage=_cubemapFromVerticallyStackedImage;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

