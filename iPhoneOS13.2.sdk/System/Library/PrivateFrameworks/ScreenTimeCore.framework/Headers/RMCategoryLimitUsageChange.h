//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface RMCategoryLimitUsageChange : PBCodable <NSCopying>
{
    long long _changeInUsage;
    unsigned long long _daysSinceCreationDate;
    NSString *_limitType;
    NSString *_limitedCategory;
    _Bool _noCreationDate;
    struct {
        unsigned int changeInUsage:1;
        unsigned int daysSinceCreationDate:1;
        unsigned int noCreationDate:1;
    } _has;
}

@property(nonatomic) _Bool noCreationDate; // @synthesize noCreationDate=_noCreationDate;
@property(retain, nonatomic) NSString *limitType; // @synthesize limitType=_limitType;
@property(nonatomic) long long changeInUsage; // @synthesize changeInUsage=_changeInUsage;
@property(nonatomic) unsigned long long daysSinceCreationDate; // @synthesize daysSinceCreationDate=_daysSinceCreationDate;
@property(retain, nonatomic) NSString *limitedCategory; // @synthesize limitedCategory=_limitedCategory;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNoCreationDate;
@property(readonly, nonatomic) _Bool hasLimitType;
@property(nonatomic) _Bool hasChangeInUsage;
@property(nonatomic) _Bool hasDaysSinceCreationDate;
@property(readonly, nonatomic) _Bool hasLimitedCategory;

@end

