//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying>
{
    unsigned long long _byteLength;
    unsigned long long _byteOffset;
    double _duration;
    double _timeOffset;
    unsigned int _height;
    int _type;
    unsigned int _width;
    struct {
        unsigned int byteLength:1;
        unsigned int byteOffset:1;
        unsigned int duration:1;
        unsigned int timeOffset:1;
        unsigned int height:1;
        unsigned int type:1;
        unsigned int width:1;
    } _has;
}

@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) unsigned long long byteLength; // @synthesize byteLength=_byteLength;
@property(nonatomic) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimeOffset;
@property(nonatomic) _Bool hasByteLength;
@property(nonatomic) _Bool hasByteOffset;

@end

