//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSPDataMetadataMap : TSPObject
{
    NSMutableDictionary *_identifierToDataMetadata;
}

-     // Error parsing type: v32@0:8^{DataMetadataMap=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::DataMetadataMap_DataMetadataMapEntry>=^{Arena}ii^{Rep}}}16@24, name: saveToMessage:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{DataMetadataMap=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::DataMetadataMap_DataMetadataMapEntry>=^{Arena}ii^{Rep}}}16@24, name: loadFromMessage:unarchiver:
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

