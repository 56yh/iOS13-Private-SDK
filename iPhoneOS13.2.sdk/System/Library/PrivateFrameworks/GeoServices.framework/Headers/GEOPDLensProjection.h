//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



__attribute__((visibility("hidden")))
@interface GEOPDLensProjection : PBCodable <NSCopying>
{
    double _cx;
    double _cy;
    double _fovH;
    double _fovS;
    double _k2;
    double _k3;
    double _k4;
    double _lx;
    double _ly;
    int _type;
    struct {
        unsigned int has_cx:1;
        unsigned int has_cy:1;
        unsigned int has_fovH:1;
        unsigned int has_fovS:1;
        unsigned int has_k2:1;
        unsigned int has_k3:1;
        unsigned int has_k4:1;
        unsigned int has_lx:1;
        unsigned int has_ly:1;
        unsigned int has_type:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLy;
@property(nonatomic) double ly;
@property(nonatomic) _Bool hasLx;
@property(nonatomic) double lx;
@property(nonatomic) _Bool hasCy;
@property(nonatomic) double cy;
@property(nonatomic) _Bool hasCx;
@property(nonatomic) double cx;
@property(nonatomic) _Bool hasK4;
@property(nonatomic) double k4;
@property(nonatomic) _Bool hasK3;
@property(nonatomic) double k3;
@property(nonatomic) _Bool hasK2;
@property(nonatomic) double k2;
@property(nonatomic) _Bool hasFovH;
@property(nonatomic) double fovH;
@property(nonatomic) _Bool hasFovS;
@property(nonatomic) double fovS;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end

