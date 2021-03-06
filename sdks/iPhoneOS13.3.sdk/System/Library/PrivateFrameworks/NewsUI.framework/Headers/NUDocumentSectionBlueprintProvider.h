//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUDocumentSectionBlueprintProvider-Protocol.h>

@class FCObservable;

@interface NUDocumentSectionBlueprintProvider : NSObject <NUDocumentSectionBlueprintProvider>
{
    FCObservable *_tempObservableHeaderBlueprint;
    FCObservable *_tempObservableFooterBlueprint;
    FCObservable *_tempObservableContentOverlayBlueprintData;
}

@property(readonly, nonatomic) FCObservable *tempObservableContentOverlayBlueprintData; // @synthesize tempObservableContentOverlayBlueprintData=_tempObservableContentOverlayBlueprintData;
@property(readonly, nonatomic) FCObservable *tempObservableFooterBlueprint; // @synthesize tempObservableFooterBlueprint=_tempObservableFooterBlueprint;
@property(readonly, nonatomic) FCObservable *tempObservableHeaderBlueprint; // @synthesize tempObservableHeaderBlueprint=_tempObservableHeaderBlueprint;
// - (void).cxx_destruct;
- (id)observableContentOverlayBlueprintData;
- (id)observableFooterBlueprint;
- (id)observableHeaderBlueprint;
- (id)init;

@end

