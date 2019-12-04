//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSUUID;

__attribute__((visibility("hidden")))
@interface KNBuildChunkIdentifier : NSObject <NSCopying>
{
    NSUUID *_buildUUID;
    int _chunkID;
}

+ (id)emptyIdentifier;
@property(readonly, nonatomic) int chunkID; // @synthesize chunkID=_chunkID;
@property(readonly, nonatomic) NSUUID *buildUUID; // @synthesize buildUUID=_buildUUID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)resolveToChunkOnSlide:(id)arg1;
- (id)resolveToChunkUsingContext:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuild:(id)arg1 chunkID:(int)arg2;
- (id)initEmptyIdentifier;
-     // Error parsing type: v24@0:8^{BuildChunkIdentifierArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{UUID}i}16, name: saveToMessage:
-     // Error parsing type: @24@0:8r^{BuildChunkIdentifierArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{UUID}i}16, name: initWithMessage:

@end

