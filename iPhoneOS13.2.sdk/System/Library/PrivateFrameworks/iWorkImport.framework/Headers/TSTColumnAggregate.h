//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>



__attribute__((visibility("hidden")))
@interface TSTColumnAggregate : TSKSosBase <NSCopying>
{
    UUIDData_5fbc143e _columnUid;
    int _level;
    unsigned char _aggregateType;
}

@property(nonatomic) unsigned char aggregateType; // @synthesize aggregateType=_aggregateType;
@property(readonly, nonatomic) int level; // @synthesize level=_level;
@property(readonly, nonatomic) const UUIDData_5fbc143e *columnUid; // @synthesize columnUid=_columnUid;
- (id).cxx_construct;
-     // Error parsing type: v32@0:8^{ColumnAggregateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{UUID}Ii}16@24, name: encodeToArchive:archiver:
-     // Error parsing type: @24@0:8r^{ColumnAggregateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{UUID}Ii}16, name: initWithArchive:
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnUid:(const UUIDData_5fbc143e *)arg1 level:(int)arg2 aggregateType:(unsigned char)arg3;

@end

