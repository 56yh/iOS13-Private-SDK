//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class PDNotesMaster;

__attribute__((visibility("hidden")))
@interface PDNotesSlide : PDSlideChild
{
    PDNotesMaster *mNotesMaster;
}

- (id)description;
- (void)doneWithContent;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterPlaceholderOfType:(int)arg1;
- (void)setNotesMaster:(id)arg1;
- (id)notesMaster;
- (id)parentSlideBase;
- (id)init;

@end

