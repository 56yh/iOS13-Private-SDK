//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>



@class BSMutableSettings, NSMutableSet, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableSettings *_changes;
    NSMutableSet *_flagRemovals;
    NSMutableSet *_objectRemovals;
}

+ (_Bool)_isValidRemovalsSet:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (id)allSettings;
- (void)_enumerateSettingsInSet:(id)arg1 withBlock:(id /* block */)arg2;
- (void)inspectChangesWithBlock:(id /* block */)arg1;
- (void)applyToSettings:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

