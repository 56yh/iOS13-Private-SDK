//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NTKComplicationCollection;

@protocol NTKComplicationCollectionObserver <NSObject>

@optional
- (void)complicationCollectionDidLoad:(NTKComplicationCollection *)arg1;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didRemoveSampleTemplatesForClient:(NSString *)arg2;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didUpdateSampleTemplateForClient:(NSString *)arg2;
@end

