initSidebarItems({"constant":[["APP_NAME",""]],"fn":[["get_ep_id_from_topic","Parses topic and extracts endpoint_ID. I.e. for topic `ucl/by-unid/node_1/ep0/NameAndLocation/Attributes/Location/Reported` the 0:u16 value will be returned."],["get_last_topic_chunk","Parses topic and extracts it’s last chunk. I.e. for topic `ucl/by-unid/node_1/ep0/NameAndLocation/Attributes/Location/Reported` the “Reported” string will be returned."],["get_penultimate_topic_chunk","Parses topic and extracts it’s penultimate chunk. I.e. for topic `ucl/by-unid/node_1/ep0/NameAndLocation/Attributes/Location/Reported` the “Location” string will be returned."],["get_unid_from_topic","Parses topic and extracts unid. I.e. for topic `ucl/by-unid/node_1/ep0/NameAndLocation/Attributes/Location/Reported` the “node_1” string will be returned."]],"struct":[["MqttNALHandler","MqttNALHandler handles subscription messages related to Name and Location service. It subscribes to listen to the correct topics and is to be passed to the mosquitto client."]]});