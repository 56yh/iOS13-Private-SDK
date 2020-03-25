//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString, UIImage;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _horizontallyFlipped;
    UIImage *_underlyingImage;
}

+ (BOOL)supportsSecureCoding;
+ (double)screenScale;
+ (CGImage )resizedCGImageFromImage:(CGImage )arg1 newSize:(CGSize)arg2;
+ (id)imageWithUnderlyingImage:(id)arg1;
+ (id)imageWithCGImage:(CGImage )arg1;
+ (id)imageWithData:(id)arg1;
+ (id)templateImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)templateImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1;
@property(nonatomic, getter=isHorizontallyFlipped) BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqualToImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)flippedUnderlyingImage;
- (BOOL)isLargerThanSize:(CGSize)arg1;
- (id)JPEGRepresentationWithCompressionFactor:(double)arg1;
- (id)imageByAspectFittingToBox:(CGSize)arg1;
- (id)imageByEnlargingCanvasToSize:(CGSize)arg1;
- (id)imageByResizingToSize:(CGSize)arg1;
@property(copy, nonatomic) NSString *accessibilityDescription;
- (BOOL)layoutIsLeftToRight;
@property(readonly, nonatomic) CRKImage *localizedImage;
@property(readonly, nonatomic) CGImage CGImage;
@property(readonly, nonatomic) CGSize size;
@property(readonly, copy, nonatomic) NSData *PNGRepresentation;
- (id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(BOOL)arg2;
- (id)initWithUnderlyingImage:(id)arg1;

@end
