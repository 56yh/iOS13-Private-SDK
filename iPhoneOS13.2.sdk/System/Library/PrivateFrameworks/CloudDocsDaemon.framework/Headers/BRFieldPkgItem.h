//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSString;

@interface BRFieldPkgItem : PBCodable <NSCopying>
{
    long long _mtime;
    long long _xattrIndex;
    NSString *_path;
    NSData *_quarantineInfo;
    NSData *_signature;
    NSString *_symlinkContent;
    int _type;
    _Bool _isExecutable;
    _Bool _isWritable;
    struct {
        unsigned int mtime:1;
        unsigned int xattrIndex:1;
        unsigned int isExecutable:1;
        unsigned int isWritable:1;
    } _has;
}

@property(nonatomic) long long xattrIndex; // @synthesize xattrIndex=_xattrIndex;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(retain, nonatomic) NSString *symlinkContent; // @synthesize symlinkContent=_symlinkContent;
@property(nonatomic) _Bool isExecutable; // @synthesize isExecutable=_isExecutable;
@property(nonatomic) _Bool isWritable; // @synthesize isWritable=_isWritable;
@property(nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasXattrIndex;
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasQuarantineInfo;
@property(readonly, nonatomic) _Bool hasSymlinkContent;
@property(nonatomic) _Bool hasIsExecutable;
@property(nonatomic) _Bool hasIsWritable;
@property(nonatomic) _Bool hasMtime;
@property(readonly, nonatomic) _Bool hasPath;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)clear;
- (void)updateWithPkgItem:(id)arg1;
- (id)initWithPkgItem:(id)arg1;

@end

