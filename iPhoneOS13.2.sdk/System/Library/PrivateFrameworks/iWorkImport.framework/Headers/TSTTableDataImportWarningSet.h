//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTImportWarningSet;

__attribute__((visibility("hidden")))
@interface TSTTableDataImportWarningSet : TSTTableDataObject
{
    TSTImportWarningSet *_importWarningSet;
}

+ (id)objectWithImportWarningSet:(id)arg1 refCount:(unsigned int)arg2;
- (id)importWarningSet;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)estimateByteSize;
- (unsigned long long)hash;
-     // Error parsing type: v36@0:8^{TableDataList_ListEntry=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{FormulaArchive}^{FormatStructArchive}^{CustomFormatArchive}^{Reference}^{Reference}^{ImportWarningSetArchive}^{CellSpecArchive}II}16I24@28, name: encodeToArchive:key:archiver:
-     // Error parsing type: v40@0:8r^{TableDataList_ListEntry=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{FormulaArchive}^{FormatStructArchive}^{CustomFormatArchive}^{Reference}^{Reference}^{ImportWarningSetArchive}^{CellSpecArchive}II}16@24@?32, name: loadFromArchive:unarchiver:completion:
- (id)initObjectWithImportWarningSet:(id)arg1 refCount:(unsigned int)arg2;

@end

