//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/_UIFontPickerRemoteViewControllerHost-Protocol.h>

@class NSString;
@protocol _UIFontPickerRemoteViewControllerHost;

__attribute__((visibility("hidden")))
@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerRemoteViewControllerHost>
{
    id <_UIFontPickerRemoteViewControllerHost> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak id <_UIFontPickerRemoteViewControllerHost> _delegate; // @synthesize _delegate;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

