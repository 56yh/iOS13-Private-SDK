//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISImageDescriptor-Protocol.h>



@class NSString;
@protocol NSCopying;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying>
{
    struct CGSize _size;
    double _scale;
    unsigned long long _variantOptions;
    unsigned long long _badgeOptions;
    unsigned long long _backgroundStyle;
    _Bool _preferExtendedColorResources;
    NSString *_preferedResourceName;
    unsigned long long _languageDirection;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageDescriptorNamed:(id)arg1;
+ (id)icnsImageDescriptors;
@property _Bool preferExtendedColorResources; // @synthesize preferExtendedColorResources=_preferExtendedColorResources;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long badgeOptions; // @synthesize badgeOptions=_badgeOptions;
@property unsigned long long languageDirection; // @synthesize languageDirection=_languageDirection;
@property(retain) NSString *preferedResourceName; // @synthesize preferedResourceName=_preferedResourceName;
@property(nonatomic) unsigned long long variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
@property(retain) id <NSCopying> imageCacheKey; // @dynamic imageCacheKey;
@property(readonly) double sanitizedScale;
@property(readonly) struct CGSize sanitizedSize;
@property(nonatomic) _Bool drawBadge;
@property(nonatomic) _Bool drawBorder;
@property(nonatomic) _Bool shouldApplyMask;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(nonatomic) unsigned long long shape;
@property(nonatomic) _Bool selectedVariant;
@property(nonatomic) _Bool templateVariant;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

