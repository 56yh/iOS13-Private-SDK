//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>




@class NSData, NSDictionary, NSString;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    NSString *_fullName;
    long long _personType;
    long long _manualSortOrder;
    NSString *_displayName;
    long long _verifiedType;
    NSString *_mergeTargetPersonIdentifier;
    NSData *_contactDescriptor;
}

+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)serverSupportsMergeTargetRef;
+ (_Bool)serverSupportsGraphPeopleHome;
@property(copy, nonatomic) NSData *contactDescriptor; // @synthesize contactDescriptor=_contactDescriptor;
@property(copy, nonatomic) NSString *mergeTargetPersonIdentifier; // @synthesize mergeTargetPersonIdentifier=_mergeTargetPersonIdentifier;
@property(nonatomic) long long verifiedType; // @synthesize verifiedType=_verifiedType;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long manualSortOrder; // @synthesize manualSortOrder=_manualSortOrder;
@property(nonatomic) long long personType; // @synthesize personType=_personType;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSDictionary *contactMatchingDictionary;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;
- (_Bool)validateRecordForTracker:(id)arg1;

@end

