//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf
{
    BOOL _useImageAsTitle;
    PKDiscoveryCallToAction *_callToAction;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL useImageAsTitle; // @synthesize useImageAsTitle=_useImageAsTitle;
@property(readonly, nonatomic) PKDiscoveryCallToAction *callToAction; // @synthesize callToAction=_callToAction;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
