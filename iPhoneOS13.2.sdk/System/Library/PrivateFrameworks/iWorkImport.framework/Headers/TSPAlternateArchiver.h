//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPArchiverBase.h>

#import <iWorkImport/TSPKnownFieldRuleProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider>
{
    RepeatedPtrField_02f83fb8 _fieldPathsToRemove;
    struct {
        unsigned int hasPreserveNewerValueRule:1;
        unsigned int hasPreserveNewerValueUntilModifiedRule:1;
    } _flags;
    _Bool _isDiff;
    // Error parsing type: r^{FieldPath=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i}, name: _fieldPath
    unsigned long long _diffReadVersion;
    TSPArchiverBase *_parentArchiver;
}

@property(readonly, nonatomic) __weak TSPArchiverBase *parentArchiver; // @synthesize parentArchiver=_parentArchiver;
@property(readonly, nonatomic) unsigned long long diffReadVersion; // @synthesize diffReadVersion=_diffReadVersion;
// Error parsing type for property fieldPath:
// Property attributes: Tr^{FieldPath=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i},R,N,V_fieldPath

@property(readonly, nonatomic) _Bool isDiff; // @synthesize isDiff=_isDiff;
- (id).cxx_construct;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool isContentUnknown;
- (_Bool)isSavingCollaborativeDocument;
- (_Bool)isSavingDocumentAs;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 field:(int)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2;
- (id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3;
- (void)removeFieldAtEndOfPath:(int *)arg1;
- (void)removeField:(int)arg1;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2;
-     // Error parsing type: r^{FieldPath=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i}24@0:8^B16, name: baseFieldPathAndReturnShouldDeleteReturnedValue:
@property(readonly, nonatomic) const RepeatedPtrField_02f83fb8 *fieldPathsToRemove;
- (void)dealloc;
-     // Error parsing type: @60@0:8@16Q24r^{FieldPath=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i}32B40Q44@52, name: initWithObject:version:fieldPath:isDiff:diffReadVersion:parentArchiver:
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

