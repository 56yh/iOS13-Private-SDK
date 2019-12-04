//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSTDateNode : TSTExpressionNode
{
    _Bool _isBlank;
    NSDate *_value;
    NSString *_dateFormat;
}

@property(retain, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(nonatomic) _Bool isBlank; // @synthesize isBlank=_isBlank;
@property(retain, nonatomic) NSDate *value; // @synthesize value=_value;
- (id)description;
-     // Error parsing type: v32@0:8^{DateNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{ExpressionNodeArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{DateNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{ExpressionNodeArchive}}16@24, name: loadFromArchive:unarchiver:
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSTDurationWrapper)durationWrapper;
- (id)date;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)string;
- (int)tokenType;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 asBlank:(_Bool)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 dateValue:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end
