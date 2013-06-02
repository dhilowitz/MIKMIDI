//
//  MIKMIDI.h
//  MIKMIDI
//
//  Created by Andrew Madsen on 6/2/13.
//  Copyright (c) 2013 Mixed In Key. All rights reserved.
//

/* Umbrella header for MIKMIDI public interface. */

#import "MIKMIDI.h"
#import "MIKMIDICommand.h"
#import "MIKMIDIChannelVoiceCommand.h"
#import "MIKMIDIControlChangeCommand.h"
#import "MIKMIDIDestinationEndpoint.h"
#import "MIKMIDIDevice.h"
#import "MIKMIDIDeviceManager.h"
#import "MIKMIDIEndpoint.h"
#import "MIKMIDIEntity.h"
#import "MIKMIDIInputPort.h"
#import "MIKMIDIObject.h"
#import "MIKMIDIOutputPort.h"
#import "MIKMIDIPort.h"
#import "MIKMIDIResponder.h"
#import "MIKMIDISourceEndpoint.h"
#import "MIKMIDISystemExclusiveCommand.h"
#import "MIKMIDISystemMessageCommand.h"
#import "MIKMIDIUtilities.h"

#if (TARGET_OS_MAC && !TARGET_OS_IPHONE)
#import "NSApplication+MIKMIDI.h"
#endif