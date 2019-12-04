//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>




@class CPLEngineScope, CPLScopedIdentifier, NSData, NSDate, NSDictionary, NSString;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    _Bool _disabled;
    long long _scopeType;
    NSDictionary *_assetCountPerType;
    NSDate *_disabledDate;
    NSDate *_deleteDate;
    NSData *_accountFlagsData;
    unsigned long long _pullTaskItem;
    CPLEngineScope *_scope;
}

+ (long long)defaultFlagsForScopeType:(long long)arg1;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (_Bool)shouldAutoActivateScopeWithType:(long long)arg1;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (_Bool)supportsSecureCoding;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(retain, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned long long pullTaskItem; // @synthesize pullTaskItem=_pullTaskItem;
@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(retain, nonatomic) NSDate *deleteDate; // @synthesize deleteDate=_deleteDate;
@property(retain, nonatomic) NSDate *disabledDate; // @synthesize disabledDate=_disabledDate;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSDictionary *assetCountPerType; // @synthesize assetCountPerType=_assetCountPerType;
@property(nonatomic) long long scopeType; // @synthesize scopeType=_scopeType;
- (id)description;
- (id)accountFlags;
- (id)scopeIdentifier;
- (id)_scopedIdentifier;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (void)_setChangeType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(_Bool *)arg2;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 libraryInfo:(id)arg3 state:(id)arg4;
- (void)_setupWithLibraryState:(id)arg1;
- (void)_setupWithLibraryInfo:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *recordModificationDate; // @dynamic recordModificationDate;
@property(copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @dynamic scopedIdentifier;

@end

