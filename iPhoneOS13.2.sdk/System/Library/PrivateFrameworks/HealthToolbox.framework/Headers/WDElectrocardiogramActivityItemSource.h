//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/UIActivityItemSource-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>
{
    NSURL *_pdfTemporaryFileURL;
}

@property(readonly, nonatomic) NSURL *pdfTemporaryFileURL; // @synthesize pdfTemporaryFileURL=_pdfTemporaryFileURL;
- (void)dealloc;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

