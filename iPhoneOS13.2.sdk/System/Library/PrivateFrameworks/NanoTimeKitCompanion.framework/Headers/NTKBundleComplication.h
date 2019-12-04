//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKCBundleComplication;

@interface NTKBundleComplication : NTKComplication
{
    CLKCBundleComplication *_complication;
}

+ (id)_revertedBundleComplicationFromJSONDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)bundledComplicationWithComplication:(id)arg1;
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
@property(readonly, nonatomic) CLKCBundleComplication *complication; // @synthesize complication=_complication;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (id)localizedRichKeylineLabelText;
- (id)localizedKeylineLabelText;
- (id)description;
- (id)customDailySnapshotKey;

@end

