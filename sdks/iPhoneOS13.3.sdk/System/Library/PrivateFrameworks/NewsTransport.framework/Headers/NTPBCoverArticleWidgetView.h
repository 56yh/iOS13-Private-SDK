//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property(readonly, nonatomic) BOOL hasCoverArticleWidgetViewingSessionId;

@end

