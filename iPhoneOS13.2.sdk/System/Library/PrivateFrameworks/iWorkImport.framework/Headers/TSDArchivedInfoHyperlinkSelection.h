//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSDInfoHyperlinkSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedInfoHyperlinkSelection : TSPObject <TSKArchivedSelection>
{
    TSDInfoHyperlinkSelection *_hyperlinkSelection;
}

@property(retain, nonatomic) TSDInfoHyperlinkSelection *hyperlinkSelection; // @synthesize hyperlinkSelection=_hyperlinkSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

