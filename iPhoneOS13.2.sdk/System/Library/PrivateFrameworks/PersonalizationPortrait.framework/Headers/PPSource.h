//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveSupport/_PASZonedObject.h>




@class NSDate, NSString, PPSourceMetadata;

@interface PPSource : _PASZonedObject <NSCopying, NSSecureCoding>
{
    PPSourceMetadata *_metadata;
    NSString *_bundleId;
    NSString *_groupId;
    NSString *_documentId;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PPSourceMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSource:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 metadata:(id)arg5;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4;

@end

