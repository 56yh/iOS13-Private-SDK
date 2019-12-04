//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKSelectionPath : NSObject
{
    NSArray *_currentSelection;
}

+ (id)selectionPathWithSelectionArray:(id)arg1;
-     // Error parsing type: v40@0:8^{SelectionPathArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}}16@24@32, name: saveToArchive:archiver:context:
-     // Error parsing type: @32@0:8r^{SelectionPathArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}}16@24, name: initWithArchive:unarchiver:
@property(readonly, nonatomic) NSString *UUIDDescription;
- (id)description;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(id /* block */)arg1;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(id /* block */)arg1;
- (id)leastSpecificSelectionOfClass:(Class)arg1;
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;
- (id)mostSpecificSelectionOfClass:(Class)arg1;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;
- (id)selectionPathPoppingToSelection:(id)arg1;
- (id)selectionPathPoppingOffSelection:(id)arg1;
- (id)selectionPathWithAppendedSelections:(id)arg1;
- (id)selectionPathWithAppendedSelection:(id)arg1;
- (unsigned long long)indexForSelection:(id)arg1;
- (id)selectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *orderedSelections;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSelectionArray:(id)arg1;

@end

