//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying>
{
    int _coverArticleWidgetArticleCount;
    NSData *_coverArticleWidgetViewingSessionId;
    CDStruct_bb0d9f0d _has;
}

@property(nonatomic) int coverArticleWidgetArticleCount; // @synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount;
@property(retain, nonatomic) NSData *coverArticleWidgetViewingSessionId; // @synthesize coverArticleWidgetViewingSessionId=_coverArticleWidgetViewingSessionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCoverArticleWidgetArticleCount;
@property(readonly, nonatomic) _Bool hasCoverArticleWidgetViewingSessionId;

@end

