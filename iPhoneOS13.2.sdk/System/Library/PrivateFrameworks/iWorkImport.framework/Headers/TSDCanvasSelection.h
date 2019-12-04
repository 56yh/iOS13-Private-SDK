//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import <iWorkImport/TSDCanvasSelection-Protocol.h>

@class NSSet, NSString, TSDInfoCollectionSelectionHelper;

__attribute__((visibility("hidden")))
@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>
{
    TSDInfoCollectionSelectionHelper *_selectionHelper;
}

+ (id)emptySelection;
+ (Class)archivedSelectionClass;
@property(retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper; // @synthesize selectionHelper=_selectionHelper;
- (id)UUIDDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *subclassDescription;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;
- (id)infosOfClass:(Class)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long infoCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSSet *nonInteractiveInfos;
@property(readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property(readonly, nonatomic) NSSet *infos;
@property(readonly, nonatomic) NSSet *modelInfos;
- (id)initWithInfos:(id)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
-     // Error parsing type: v32@0:8^{CanvasSelectionArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{Reference}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{CanvasSelectionArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{Reference}}16@24, name: initWithArchive:unarchiver:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

