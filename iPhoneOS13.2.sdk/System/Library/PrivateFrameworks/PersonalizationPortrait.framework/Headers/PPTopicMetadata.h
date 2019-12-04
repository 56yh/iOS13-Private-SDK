//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _impressionCount;
    unsigned short _occurrencesInSource;
    unsigned short _algorithmResultPosition;
    unsigned short _algorithmResultCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short algorithmResultCount; // @synthesize algorithmResultCount=_algorithmResultCount;
@property(readonly, nonatomic) unsigned short algorithmResultPosition; // @synthesize algorithmResultPosition=_algorithmResultPosition;
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) unsigned short impressionCount; // @synthesize impressionCount=_impressionCount;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTopicMetadata:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 algorithmResultPosition:(unsigned short)arg3 algorithmResultCount:(unsigned short)arg4;
- (id)init;

@end

