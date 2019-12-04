//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString;

@interface WFPodcastPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>
{
}

- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (_Bool)preferItemPickerSheet;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

