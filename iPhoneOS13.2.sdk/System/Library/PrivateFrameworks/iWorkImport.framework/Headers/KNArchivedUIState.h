//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNUIState;

__attribute__((visibility("hidden")))
@interface KNArchivedUIState : TSPObject
{
    KNUIState *_uiState;
}

@property(readonly, nonatomic) KNUIState *uiState; // @synthesize uiState=_uiState;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)p_validateViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (_Bool)validateDesktopViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (_Bool)validateMobileViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (id)initWithUIState:(id)arg1 context:(id)arg2;

@end

