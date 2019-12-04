//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKPencilAnnotation-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPOverlappingField-Protocol.h>
#import <iWorkImport/TSWPTextSpanningObject-Protocol.h>

@class NSString, TSKPKDrawing, TSWPStorage;
@protocol TSKPencilAnnotationStorage;

__attribute__((visibility("hidden")))
@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>
{
    TSWPStorage *_parentStorage;
    NSString *_textAttributeUUIDString;
    id <TSKPencilAnnotationStorage> _pencilAnnotationStorage;
}

@property(retain, nonatomic) id <TSKPencilAnnotationStorage> pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
@property(readonly, nonatomic) NSString *textAttributeUUIDString; // @synthesize textAttributeUUIDString=_textAttributeUUIDString;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{PencilAnnotationArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}}16@24, name: loadFromArchive:unarchiver:
@property(readonly, nonatomic) NSString *uuid;
- (_Bool)isInDocument;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEquivalentToObject:(id)arg1;
- (void)resetTextAttributeUUIDString;
@property(readonly, copy) NSString *description;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) TSKPKDrawing *drawing; // @dynamic drawing;
@property(readonly) Class superclass;

@end

